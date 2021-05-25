/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "\
                -@                \n\
               .##@               \n\
              .####@              \n\
              @#####@             \n\
            . *######@            \n\
           .##@o@#####@           \n\
          /############@          \n\
         /##############@         \n\
        @######@**%######@        \n\
       @######`     %#####o       \n\
      @######@       ######%      \n\
    -@#######h       ######@.`    \n\
   /#####h**``       `**%@####@   \n\
  @H@*`                    `*%#@  \n\
 *`                            `* \n\
          Session locked";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "Source Code Pro:size:pixelsize=18:antialias=true:autohint=true";
//static const char *fonts[] = { "sans-serif:size:pixelsize=24:antialias=true:autohint=true", "Font Awesome 5 Free Solid:size:pixelsize=128:antialias=true:autohint=true" };
