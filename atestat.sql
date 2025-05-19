--update
UPDATE admitere SET media = FLOOR((proba1 + proba2 + 0.0001) / 2 * 100) / 100;
UPDATE admitere SET rezultat = 'respins';
UPDATE admitere SET rezultat = 'admis' WHERE proba1 >= 5 AND proba2 >= 5 ORDER BY media DESC LIMIT 20

--problema 3
SELECT NUME, PRENUME, ORAS, datan, MEDIA FROM admitere 
WHERE REZULTAT = "admis" AND datan <= date_add(now(), INTERVAL - 20 year) AND
datan >= date_add(now(), INTERVAL - 18 YEAR) ORDER BY datan, NUME;

--problema 6
SELECT 
  COUNT(*) INTO @i FROM admitere;
SELECT 
  COUNT(*) INTO @i1 FROM admitere WHERE media BETWEEN 1 AND 5;
SELECT 
  COUNT(*) INTO @i2 FROM admitere WHERE media BETWEEN 5.01 AND 7;
SELECT 
  COUNT(*) INTO @i3 FROM admitere WHERE media BETWEEN 7.01 AND 9;
SELECT 
  COUNT(*) INTO @i4 FROM admitere WHERE media BETWEEN 9.01 AND 10;
-- Afișăm procentele, rotunjite la număr întreg
SELECT 
  ROUND((@i1 / @i) * 100) AS i1_5,
  ROUND((@i2 / @i) * 100) AS i5_7,
  ROUND((@i3 / @i) * 100) AS i7_9,
  ROUND((@i4 / @i) * 100) AS i9_10;

--problema 7
SELECT 
  ROW_NUMBER() OVER (ORDER BY nume, prenume) AS NR,
  nume,
  prenume,
  media,
  rezultat
FROM admitere
WHERE oras = 'NumeOras'
ORDER BY nume, prenume;

--problema 9
SELECT NUME, PRENUME, MEDIA, ORAS from admitere a
where MEDIA = (
    SELECT max(MEDIA) from admitere
    where ORAS = a.oras
)
order by ORAS;


--problema 11
SELECT NUME, PRENUME, ORAS, MEDIA from admitere WHERE ORAS != "brasov" and REZULTAT = "admis" order by media DESC, proba1 DESC limit 4;


--problema 14
SELECT nume, prenume, datan, oras
FROM admitere
WHERE sex = 'M'
  AND rezultat = 'respins'
  AND datan <= '1991-05-20'
ORDER BY nume, prenume;

SELECT nume, prenume, datan, oras
FROM admitere
WHERE sex = 'M'
  AND NOT(rezultat = 'respins'
  AND datan <= '1991-05-20')
ORDER BY nume, prenume;


--problema 15
SELECT 
  COUNT(*) AS total_candidati,
  ROUND(100 * SUM(CASE WHEN rezultat = 'admis' THEN 1 ELSE 0 END) / COUNT(*)) AS procent_admisi
FROM admitere
WHERE oras = 'NumeOras';

--problema 16
SELECT
  ROUND(AVG(proba1), 2) AS media_proba1,
  ROUND(AVG(proba2), 2) AS media_proba2,
  ROUND(AVG(media), 2) AS media_generala
FROM admitere
WHERE rezultat = 'admis';


--problema 17
SELECT nume, prenume, media, oras
FROM admitere
WHERE rezultat = 'respins'
  AND media > (
    SELECT MIN(media)
    FROM admitere
    WHERE rezultat = 'admis'
);


--problema 20
SELECT 
  oras,
  COUNT(*) AS NRCAND,
  MAX(media) AS MAX_MEDIA,
  MIN(media) AS MIN_MEDIA
FROM admitere
WHERE rezultat = 'admis'
GROUP BY oras
ORDER BY oras;

