#ifndef CHEATS_H
#define CHEATS_H

#include "../Includes/plugin.h"
#include <string.h>
#include <stdlib.h>

#define   add_search_replace(find, replace) g_find[g_i] = find; g_replace[g_i] = replace; g_i++
#define   reset_search()                    memset(g_find, 0, sizeof(g_find)); memset(g_replace, 0, sizeof(g_replace)); g_i = 0
#define   add_to_address(addr, value)       *(u32 *)addr += value
#define   sub_to_address(addr, value)       *(u32 *)addr -= value

/*
** Helpers
*/

void	find_and_replace_multiple(void *start_addr, u32 length);
void  disableCheat(int index);

void	text2item(void);;
/*
** Amiibo codes
*/

void	amCyrus(void);
void	amReese(void);
void	amResetti(void);
void	amChip(void);
void	amPhineas(void);
void	amJoan(void);
void	amKatrina(void);
void	amNat(void);
void	amSaharah(void);
void	amKK(void);
void	amRedd(void);
void	amGracie(void);
void	amLabelle(void);
void	amMabel(void);
void	amSable(void);
void	amGrams(void);
void	amLeilani(void);
void	amKappn(void);
void	amLeila(void);
void	amKatie(void);
void	amTommy(void);
void	amTimmy(void);
void	amBlanca(void);
void	amPorter(void);
void	amDon(void);
void	amLottie(void);
void	amLyle(void);
void	amCeleste(void);
void	amConga(void);
void	amBlathers(void);
void	amPelly(void);
void	amPhyllis(void);
void	amBrewster(void);
void	amJack(void);
void	amBooker(void);
void	amPete(void);
void	amCopper(void);
void	amHarriet(void);
void	amZipper(void);
void	amNook(void);
void	amGulliver(void);
void	amPascal(void);
void	amKicks(void);
void	amLeif(void);
void	amJingle(void);
void	amIsabelle(void);
void	amDigby(void);
void	amLuna(void);
void	amTortimer(void);
void	amFranklin(void);
void	amShrunk(void);
void	amWendell(void);
void	amRover(void);
void	eyesBoy(void);
void	eyesGirl(void);
void	collisions(void);
void	pattern(void);
void	emoticons(void);
void	keyboard(void);
void	objectAnywhere(void);

#endif
