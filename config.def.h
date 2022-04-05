/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 585;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "Hack Nerd Font:weight=bold:pixelsize=15:antialias=true:hinting=true";
static const char *fonts[] = {
	font,
    "monospace:size=15",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
							/*     fg         bg       */
	[SchemeNorm] 			= { "#808080", "#080808" },
	[SchemeSel] 			= { "#d0d0d0", "#1c1c1c" },
	[SchemeSelHighlight] 	= { "#d0d0d0", "#1c1c1c" },
	[SchemeNormHighlight] 	= { "#d0d0d0", "#080808" },
	[SchemeOut] 			= { "#080808", "#1c1c1c" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 10;
static unsigned int columns    = 2;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 26;
static unsigned int min_lineheight = 24;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
