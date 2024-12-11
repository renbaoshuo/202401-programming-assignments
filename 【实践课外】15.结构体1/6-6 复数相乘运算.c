PLEX multi(PLEX a,PLEX b) {
    PLEX c;

    c.re = a.re * b.re - a.im * b.im;
    c.im = a.re * b.im + a.im * b.re;

    return c;
}
