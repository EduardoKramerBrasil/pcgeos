/*----------------------------------------------------------------------------
   Normally, this in part of my geostool.lib utility library - I took it out
   to make the program compile without having to prepare a new version.
 ----------------------------------------------------------------------------*/
unsigned char _GeosXlate[]="¥  "
                           "¡¤¢ £"
                           " øùá       "
                           "ìñóòæëä  ô¦§êí"
                           "¨­ªû÷ ®¯       "
                           "      ö       "
                           "                "
                           "                ",

              _GeosXlapp[]="¥ a"
                           "¡¤¢o£"
                           "+øùáRC~'\"Ø0"
                           "ìñóòæëäããô¦§êí"
                           "¨­ªû÷®¯_ AAO"
                           "-Ä\"\"`'öY/è<>yY"
                           "+ú,\"pAEAEEIIIIOO"
                           " OUUU,^~-`øø,\",'";

unsigned char *GeosToIBM(unsigned char *s,int approx)
{
        unsigned char *p;

        for(p=s;*p;p++)                 // Ganzen String durchgehen
          if(*p>127)                    // Sonderzeichen?
            *p=(approx?_GeosXlapp:_GeosXlate)[*p-128];
                                        // Dann konvertieren
        return s;
}
