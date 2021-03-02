#ifndef T1M_GAME_ITEMS_H
#define T1M_GAME_ITEMS_H

#include <stdint.h>

// clang-format off
#define AddActiveItem           ((void          (*)(int16_t item_num))0x00421FE0)
#define InitialiseItem          ((void          (*)(int16_t item_num))0x00421CC0)
#define GlobalItemReplace       ((int32_t       (*)(int32_t in_objnum, int32_t out_objnum))0x004221D0)
#define RemoveActiveItem        ((void          (*)(int16_t item_num))0x00421EB0)
#define ItemNewRoom             ((void          (*)(int16_t item_num, int16_t room_num))0x00422060)
#define CreateEffect            ((int16_t       (*)(int16_t room_num))0x00422280)
#define KillEffect              ((void          (*)(int16_t fx_num))0x004222F0)
#define EffectNewRoom           ((void          (*)(int16_t fx_num, int16_t room_num))0x004223E0)
// clang-format on

void InitialiseItemArray(int32_t num_items);
void InitialiseFXArray();

void T1MInjectGameItems();

#endif
