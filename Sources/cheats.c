#include "cheats.h"

void	text2item(void)
{
	u16 result;
	u16 store = READU16(0x31000000);
	if (is_pressed(BUTTON_L))
	{
		u16 *id = (u16*)0x33041F60;
		char id_str[5] = {0};
		for (size_t i = 0; i < 4u; ++i)
		{
			id_str[i] = (char)READU16(id + i);
		}
		result = (u16)strtoul(id_str, NULL, 16);
		WRITEU16(0x31000000, result);
	}
	if (is_pressed(BUTTON_DU))
	{
		WRITEU16(0x3159D1E0, store);
	}
	if (is_pressed(BUTTON_DR))
	{
		WRITEU16(0x3159C138, store);
	}
	if (is_pressed(BUTTON_DD))
	{
		WRITEU16(0x3159E5F8, store);
	}
}

void	amCyrus(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x153);
		WRITEU16(0x3369C41C, 0x153);
		WRITEU16(0x3369CAA0, 0x153);
	}	
}

void	amReese(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x154);
		WRITEU16(0x3369C41C, 0x154);
		WRITEU16(0x3369CAA0, 0x154);
	}
}

void	amChip(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x155);
		WRITEU16(0x3369C41C, 0x155);
		WRITEU16(0x3369CAA0, 0x155);
	}	
}

void	amPhineas(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x156);
		WRITEU16(0x3369C41C, 0x156);
		WRITEU16(0x3369CAA0, 0x156);
	}
}

void	amJoan(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x157);
		WRITEU16(0x3369C41C, 0x157);
		WRITEU16(0x3369CAA0, 0x157);
	}
}

void	amKatrina(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x158);
		WRITEU16(0x3369C41C, 0x158);
		WRITEU16(0x3369CAA0, 0x158);
	}
}

void	amNat(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x159);
		WRITEU16(0x3369C41C, 0x159);
		WRITEU16(0x3369CAA0, 0x159);
	}
}

void	amSaharah(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x15a);
		WRITEU16(0x3369C41C, 0x15a);
		WRITEU16(0x3369CAA0, 0x15a);
	}
}

void	amKK(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x15b);
		WRITEU16(0x3369C41C, 0x15b);
		WRITEU16(0x3369CAA0, 0x15b);
	}
}

void	amRedd(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x15c);
		WRITEU16(0x3369C41C, 0x15c);
		WRITEU16(0x3369CAA0, 0x15c);
	}
}

void	amGracie(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x15d);
		WRITEU16(0x3369C41C, 0x15d);
		WRITEU16(0x3369CAA0, 0x15d);
	}
}

void	amLabelle(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x15e);
		WRITEU16(0x3369C41C, 0x15e);
		WRITEU16(0x3369CAA0, 0x15e);
	}
}

void	amMabel(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x15f);
		WRITEU16(0x3369C41C, 0x15f);
		WRITEU16(0x3369CAA0, 0x15f);
	}
}

void	amSable(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x160);
		WRITEU16(0x3369C41C, 0x160);
		WRITEU16(0x3369CAA0, 0x160);
	}
}

void	amGrams(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x161);
		WRITEU16(0x3369C41C, 0x161);
		WRITEU16(0x3369CAA0, 0x161);
	}
}

void	amLeilani(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x162);
		WRITEU16(0x3369C41C, 0x162);
		WRITEU16(0x3369CAA0, 0x162);
	}
}

void	amKappn(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x163);
		WRITEU16(0x3369C41C, 0x163);
		WRITEU16(0x3369CAA0, 0x163);
	}
}

void	amLeila(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x164);
		WRITEU16(0x3369C41C, 0x164);
		WRITEU16(0x3369CAA0, 0x164);
	}
}

void	amKatie(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x165);
		WRITEU16(0x3369C41C, 0x165);
		WRITEU16(0x3369CAA0, 0x165);
	}
}

void	amTommy(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x166);
		WRITEU16(0x3369C41C, 0x166);
		WRITEU16(0x3369CAA0, 0x166);
	}
}

void	amTimmy(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x167);
		WRITEU16(0x3369C41C, 0x167);
		WRITEU16(0x3369CAA0, 0x167);
	}
}

void	amBlanca(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x168);
		WRITEU16(0x3369C41C, 0x168);
		WRITEU16(0x3369CAA0, 0x168);
	}
}

void	amPorter(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x169);
		WRITEU16(0x3369C41C, 0x169);
		WRITEU16(0x3369CAA0, 0x169);
	}
}

void	amDon(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x16A);
		WRITEU16(0x3369C41C, 0x16A);
		WRITEU16(0x3369CAA0, 0x16A);
	}
}

void	amResetti(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x16B);
		WRITEU16(0x3369C41C, 0x16B);
		WRITEU16(0x3369CAA0, 0x16B);
	}
}

void	amLottie(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x16C);
		WRITEU16(0x3369C41C, 0x16C);
		WRITEU16(0x3369CAA0, 0x16C);
	}
}

void	amLyle(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x16D);
		WRITEU16(0x3369C41C, 0x16D);
		WRITEU16(0x3369CAA0, 0x16D);
	}
}

void	amBlathers(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x16E);
		WRITEU16(0x3369C41C, 0x16E);
		WRITEU16(0x3369CAA0, 0x16E);

	}
}

void	amCeleste(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x16F);
		WRITEU16(0x3369C41C, 0x16F);
		WRITEU16(0x3369CAA0, 0x16F);
	}
}

void	amConga(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x170);
		WRITEU16(0x3369C41C, 0x170);
		WRITEU16(0x3369CAA0, 0x170);
	}
}

void	amPelly(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x171);
		WRITEU16(0x3369C41C, 0x171);
		WRITEU16(0x3369CAA0, 0x171);
	}
}

void	amPhyllis	(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x172);
		WRITEU16(0x3369C41C, 0x172);
		WRITEU16(0x3369CAA0, 0x172);
	}
}

void	amBrewster(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x173);
		WRITEU16(0x3369C41C, 0x173);
		WRITEU16(0x3369CAA0, 0x173);
	}
}

void	amJack(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x174);
		WRITEU16(0x3369C41C, 0x174);
		WRITEU16(0x3369CAA0, 0x174);
	}
}

void	amBooker(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x175);
		WRITEU16(0x3369C41C, 0x175);
		WRITEU16(0x3369CAA0, 0x175);
	}
}

void	amPete(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x176);
		WRITEU16(0x3369C41C, 0x176);
		WRITEU16(0x3369CAA0, 0x176);
	}
}

void	amCopper(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x177);
		WRITEU16(0x3369C41C, 0x177);
		WRITEU16(0x3369CAA0, 0x177);
	}
}

void	amHarriet(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x178);
		WRITEU16(0x3369C41C, 0x178);
		WRITEU16(0x3369CAA0, 0x178);
	}
}

void	amZipper(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x179);
		WRITEU16(0x3369C41C, 0x179);
		WRITEU16(0x3369CAA0, 0x179);
	}
}

void	amNook(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x17A);
		WRITEU16(0x3369C41C, 0x17A);
		WRITEU16(0x3369CAA0, 0x17A);
	}
}

void	amGulliver(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x17B);
		WRITEU16(0x3369C41C, 0x17B);
		WRITEU16(0x3369CAA0, 0x17B);
	}
}

void	amPascal(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x17C);
		WRITEU16(0x3369C41C, 0x17C);
		WRITEU16(0x3369CAA0, 0x17C);
	}
}

void	amKicks(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x17D);
		WRITEU16(0x3369C41C, 0x17D);
		WRITEU16(0x3369CAA0, 0x17D);
	}
}

void	amLeif(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x17E);
		WRITEU16(0x3369C41C, 0x17E);
		WRITEU16(0x3369CAA0, 0x17E);
	}
}

void	amJingle(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x17F);
		WRITEU16(0x3369C41C, 0x17F);
		WRITEU16(0x3369CAA0, 0x17F);
	}
}

void	amIsabelle(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x180);
		WRITEU16(0x3369C41C, 0x180);
		WRITEU16(0x3369CAA0, 0x180);
	}
}

void	amDigby(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x181);
		WRITEU16(0x3369C41C, 0x181);
		WRITEU16(0x3369CAA0, 0x181);
	}
}

void	amLuna(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x182);
		WRITEU16(0x3369C41C, 0x182);
		WRITEU16(0x3369CAA0, 0x182);
	}
}

void	amTortimer(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x183);
		WRITEU16(0x3369C41C, 0x183);
		WRITEU16(0x3369CAA0, 0x183);
	}
}

void	amFranklin(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x184);
		WRITEU16(0x3369C41C, 0x184);
		WRITEU16(0x3369CAA0, 0x184);
	}
}

void	amShrunk(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x185);
		WRITEU16(0x3369C41C, 0x185);
		WRITEU16(0x3369CAA0, 0x185);
	}
}

void	amWendell(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x186);
		WRITEU16(0x3369C41C, 0x186);
		WRITEU16(0x3369CAA0, 0x186);
	}
}

void	amRover(void)
{
	if(is_pressed(BUTTON_R))
	{
		WRITEU16(0x33682000, 0x187);
		WRITEU16(0x3369C41C, 0x187);
		WRITEU16(0x3369CAA0, 0x187);
	}
}

void	eyesBoy(void)
{
	WRITEU8(0x33667F77, 0xC);
}

void	eyesGirl(void)
{
	WRITEU8(0x3667F77, 0x0);
}

void	collisions(void)
{
	u32 offset = 0;
	if (is_pressed(BUTTON_R + DU))
	{
		WRITEU8(0x31000004, 0x1);
	}
	if (is_pressed(BUTTON_R + DD))
	{
		WRITEU8(0x31000004, 0x0);
	}
	if (READU32(0x31000004) == 0x1)
	{
		if (READU32(0x847D80) != 0x0)
		{
			offset = READU32(0x847D80);
			WRITEU32(0x54 + offset, 0xC5000000);
		}
	}
}

void	pattern(void)
{
	WRITEU16(0x32667F82, 0x327E);
}

void	emoticons(void)
{
	if(is_pressed(BUTTON_L))
	{
		WRITEU32(0x326A8CBC, 0x4A484746);
		WRITEU32(0x326A8CC0, 0x3031322F);
		WRITEU32(0x326A8CC4, 0x0B2E3D33);
		WRITEU32(0x326A8CC8, 0x1703020C);
		WRITEU32(0x326A8CCC, 0x292A2C2B);
		WRITEU32(0x326A8CD0, 0x16151C10);
		WRITEU32(0x326A8CD4, 0x12101418);
		WRITEU32(0x326A8CD8, 0x09080706);
		WRITEU32(0x326A8CDC, 0x0D0E0F11);
		WRITEU32(0x326A8CE0, 0x2221200A);
		WRITEU32(0x326A8CE4, 0x26252423);
		WRITEU32(0x326A8CE8, 0x1D1E2827);
	}
}