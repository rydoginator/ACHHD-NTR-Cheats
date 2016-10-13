#include "cheats.h"
#include "notes.h"
#include <string.h>

char	*builder_name = "itsRyan";

void	my_menus(void)
{
	int index;
	int i;
	
		new_unselectable_entry("ACHHD NTR Cheats Ver 1.1 Beta");
		new_spoiler("Amiibo Spoofer");
			new_radio_entry("Cyrus", amCyrus);
			new_radio_entry("Reese", amReese);
			new_radio_entry("Chip", amChip);
			new_radio_entry("Phineas", amPhineas);
			new_radio_entry("Joan", amJoan);
			new_radio_entry("Katrina", amKatrina);
			new_radio_entry("Nat", amNat);
			new_radio_entry("Saharah", amSaharah);
			new_radio_entry("K.K. Slider", amKK);
			new_radio_entry("Redd", amRedd);
			new_radio_entry("Gracie", amGracie);
			new_radio_entry("Labelle", amLabelle);
			new_radio_entry("Mabel", amMabel);
			new_radio_entry("Sable", amSable);
			new_radio_entry("Grams", amGrams);
			new_radio_entry("Leilani", amLeilani);
			new_radio_entry("Kapp'n", amKappn);
			new_radio_entry("Leila", amLeila);
			new_radio_entry("Katie", amKatie);
			new_radio_entry("Tommy", amTommy);
			new_radio_entry("Timmy", amTimmy);
			new_radio_entry("Blanca", amBlanca);
			new_radio_entry("Porter", amPorter);
			new_radio_entry("Don", amDon);
			new_radio_entry("Resetti", amResetti);
			new_radio_entry("Lottie", amLottie);
			new_radio_entry("Lyle", amLyle);
			new_radio_entry("Blathers", amBlathers);
			new_radio_entry("Celeste", amCeleste);
			new_radio_entry("Conga", amConga);
			new_radio_entry("Pelly", amPelly);
			new_radio_entry("Phyllis", amPhyllis);
			new_radio_entry("Brewster", amBrewster);
			new_radio_entry("Jack", amJack);
			new_radio_entry("Booker", amBooker);
			new_radio_entry("Pete", amPete);
			new_radio_entry("Copper", amCopper);
			new_radio_entry("Harriet", amHarriet);
			new_radio_entry("Zipper T", amZipper);
			new_radio_entry("Gulliver", amGulliver);
			new_radio_entry("Pascal", amPascal);
			new_radio_entry("Kicks", amKicks);
			new_radio_entry("Leif", amLeif);
			new_radio_entry("Jingle", amJingle);
			new_radio_entry("Isabelle", amIsabelle);
			new_radio_entry("Digby", amDigby);
			new_radio_entry("Luna", amLuna);
			new_radio_entry("Tortimer", amTortimer);
			new_radio_entry("Franklin", amFranklin);
			new_radio_entry("Shrunk", amShrunk);
			new_radio_entry("Wendell", amWendell);
			new_radio_entry("Rover", amRover);
		exit_spoiler();
		new_spoiler("Appearance Codes");
			new_radio_entry("?? Eyes Boy", eyesBoy);
			new_radio_entry("?? Eyes Girl", eyesGirl);
			new_radio_entry("1st Pattern as a Uniform", pattern);
		exit_spoiler();
		new_spoiler("Miscellaneous Codes");
			new_entry("Text to item", text2item);
			new_entry("Walk Over Objects", collisions);
			new_entry("Special Keyboard", keyboard);
			index = new_entry("All Emoticons", emoticons);
		exit_spoiler();
	for (i = 2; i <= index; i++)
		set_note(notes[i - 2], i);
}