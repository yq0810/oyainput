/*
 * oyastate.h
 */

Boolean is_acceptable(int keycode);
void oyayubi_state_init();
void create_infotables();
void close_oya_state();
void set_left_oyakey(__u16 kc);
void set_right_oyakey(__u16 kc);
void set_char_time(long char_time);
void set_oya_time(long oya_time);
void set_nicola_time(long nicola_time);
void add_key_moji(__u16 kc, int m);
void add_left_key_moji(__u16 kc, int m);
void add_right_key_moji(__u16 kc, int m);
long get_current_time();
int is_state_first();
void update_event_timer();
void on_otherkey_down(__u16 kc);
void handle_oyayubi_event(struct OyayubiEvent ev);

// 複数キー対応のための新しい関数宣言
void add_left_oyakey(__u16 kc);
void add_right_oyakey(__u16 kc);
void clear_left_oyakeys();
void clear_right_oyakeys();
Boolean is_left_oyakey(__u16 kc);
Boolean is_right_oyakey(__u16 kc);
Boolean is_oyakey(__u16 kc);
