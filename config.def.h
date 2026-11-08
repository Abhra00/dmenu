/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const int user_bh = 8;               /* add an defined amount of pixels to the bar height */

static const char *fonts[] = {
	"Iosevka:pixelsize=10:antialias=true:autohint=true",
    "SymbolsNerdFont:pixelsize=10:antialias=true:autohint=true",
    "NotoColorEmoji:pixelsize=10:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#e4e4ef", "#181818" },
	[SchemeSel]  = { "#f4f4ff", "#4f94cd" },
	[SchemeOut]  = { "#181818", "#96a6c8" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
