class wrUIHUD_WINDOW : public uiELEMENT
{
    uiELEMENT* keyBar;        // 0x6C
    uiELEMENT* healthBar;     // 0x70
    uiELEMENT* armorBar;      // 0x74
    uiELEMENT* moneyBar;      // 0x78
    uiELEMENT* ammoBar;       // 0x7C
    uiELEMENT* bossBar;       // 0x80

    uiELEMENT* powerup1;      // 0x84
    uiELEMENT* powerup2;      // 0x88
    uiELEMENT* powerup3;      // 0x8C

    uiELEMENT* underwaterBar; // 0x90

    int initFlag;             // 0x94

    txmTEXTURE* keyTex;       // 0x98
    txmTEXTURE* healthTex;    // 0x9C
    txmTEXTURE* armorTex[4];  // 0xA0–0xAC
    txmTEXTURE* ammoShovel;   // 0xB0
    txmTEXTURE* ammoPistol;   // 0xB4
    txmTEXTURE* ammoShotgun;  // 0xB8
    txmTEXTURE* ammoMCG;      // 0xBC
    txmTEXTURE* ammoCrossbow; // 0xC0
    txmTEXTURE* ammoAcid;     // 0xC4
    txmTEXTURE* ammoBazooka;  // 0xC8
    txmTEXTURE* ammoMeduza;   // 0xCC
    txmTEXTURE* ammoMinigun;  // 0xD0
    txmTEXTURE* ammoBomb;     // 0xD4
    txmTEXTURE* ammoAtomic;   // 0xD8
    txmTEXTURE* goldTex;      // 0xDC

    txmTEXTURE* powerQDam;    // 0xE0
    txmTEXTURE* powerShield;  // 0xE4
    txmTEXTURE* powerChasi;   // 0xE8

    int cachedHealth;         // 0xEC
    int cachedArmor;          // 0xF0
    int cachedMoney;          // 0xF4
    int cachedAmmo;           // 0xF8
    int cachedWeaponPtr;      // 0x100
};
