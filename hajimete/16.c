char *Scopy(unsigned char *s, unsigned char *t)
{
    unsigned char *pp;
    for(pp = s; *s = *t; s++, t++);
    return pp
}
