/*
 * UNPUBLISHED -- Rights  reserved  under  the  copyright  laws  of the
 * United States.  Use  of a copyright notice is precautionary only and
 * does not imply publication or disclosure.
 *
 * THIS DOCUMENTATION CONTAINS CONFIDENTIAL AND PROPRIETARY INFORMATION
 * OF    BLIZZARD   ENTERTAINMENT.    ANY   DUPLICATION,  MODIFICATION,
 * DISTRIBUTION, OR DISCLOSURE IS STRICTLY PROHIBITED WITHOUT THE PRIOR
 * EXPRESS WRITTEN PERMISSION OF BLIZZARD ENTERTAINMENT.
 */

void __cdecl gamemenu_previous();
void __cdecl gamemenu_enable_single();
void __cdecl gamemenu_enable_multi();
void __cdecl gamemenu_off();
void __cdecl gamemenu_handle_previous();
void __cdecl gamemenu_new_game();
void __cdecl gamemenu_quit_game();
void __cdecl gamemenu_load_game();
void __cdecl gamemenu_save_game();
void __cdecl gamemenu_restart_town();
void __cdecl gamemenu_options();
void __cdecl gamemenu_get_music();
void __fastcall gamemenu_sound_music_toggle(char **names, TMenuItem *menu_item, int gamma);
void __cdecl gamemenu_get_sound();
void __cdecl gamemenu_get_color_cycling();
void __cdecl gamemenu_get_gamma();
void __fastcall gamemenu_music_volume(int a1);
int __fastcall gamemenu_slider_music_sound(TMenuItem *menu_item);
void __fastcall gamemenu_sound_volume(int a1);
void __fastcall gamemenu_gamma(int a1);
int __cdecl gamemenu_slider_gamma();
void __cdecl gamemenu_color_cycling();

/* rdata */
extern TMenuItem sgSingleMenu[6];
extern TMenuItem sgMultiMenu[5];
extern TMenuItem sgOptionMenu[6];
extern char *music_toggle_names[];
extern char *sound_toggle_names[];
extern char *color_cycling_toggle_names[];