--problema 9
SELECT NUME, PRENUME, MEDIA, ORAS from admitere a
where MEDIA = (
    SELECT max(MEDIA) from admitere
    where ORAS = a.oras
)
order by ORAS;
