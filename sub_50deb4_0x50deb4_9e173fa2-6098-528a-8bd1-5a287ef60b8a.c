// ============================================================
// 函数名称: sub_50deb4
// 虚拟地址: 0x50deb4
// WARP GUID: 9e173fa2-6098-528a-8bd1-5a287ef60b8a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_47ab08, sub_50f478, sub_404138, sub_408e1c, sub_50d79c, sub_50d7cc, sub_46910c, sub_51038c, sub_403e1c, sub_50e9c0
// [被调用的父级函数]: sub_50d82b, sub_50e090, sub_50e11c, sub_50e22c, sub_50d838
// ============================================================

int32_t __convention("regparm")sub_50deb4(void* arg1, char arg2, int32_t arg3 @ esi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_1 = 5
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    *(esp_2 - 8) = arg3
    *(esp_2 - 0xc) = &var_4
    *(esp_2 - 0x10) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x14) = fsbase->NtTib.ExceptionList
    void* esp_7 = esp_2 - 0x14
    fsbase->NtTib.ExceptionList = esp_7
    *(arg1 + 0x1b1fc) = GetTickCount()
    char eax_1
    
    if (arg2 == 1)
        eax_1 = sub_50d79c(arg1)
    
    if (arg2 != 1 || eax_1 != 0)
        *(arg1 + 0x1b1f7) = *(arg1 + 0x1b1f6)
        *(arg1 + 0x1b1f6) = 8
        void* esp_18
        void* esi_1
        int32_t edi
        char ebx_1
        
        if (arg2 == 0)
            void var_20
            void* ebp_3
            ebp_3, esi_1 = sub_46910c(*data_530304, "f_spiellist", &var_20)
            *(esp_7 - 4) = *(ebp_3 - 0x1c)
            *(esp_7 - 8) = 0
            *(esp_7 - 0xc) = ebp_3 - 8
            *(esp_7 - 0x10) = *(esi_1 + 0x38)
            *(esp_7 - 0x14) = "?ACTION=GET_GAMELIST&PARAM1="
            int32_t ecx_6 = sub_408e1c(*(esi_1 + 0x58), ebp_3 - 0x24)
            *(esp_7 - 0x18) = *(ebp_3 - 0x24)
            ebx_1, ebp_1 = sub_50d7cc(ecx_6, ebp_3 - 0x28)
            *(esp_7 - 4) = ebp_1[-0xa]
            sub_404138(&ebp_1[-8], 4)
            esp_18 = esp_7
            sub_51038c(esi_1, ebp_1[-8], 3, esi_1, edi)
        else
            void var_10
            void* ebp_2
            ebp_2, esi_1 = sub_46910c(*data_530304, "f_spieleakt", &var_10)
            *(esp_7 - 4) = *(ebp_2 - 0xc)
            int80_t x87_r0
            sub_47ab08(*data_530304, *data_5307d8, *data_5302ac, x87_r0)
            *(esp_7 - 4) = 0
            *(esp_7 - 8) = 2
            *(esp_7 - 0xc) = ebp_2 - 8
            *(esp_7 - 0x10) = *(esi_1 + 0x38)
            *(esp_7 - 0x14) = "?ACTION=GET_GAMELIST&PARAM1="
            int32_t ecx_3 = sub_408e1c(*(esi_1 + 0x58), ebp_2 - 0x14)
            *(esp_7 - 0x18) = *(ebp_2 - 0x14)
            ebx_1, ebp_1 = sub_50d7cc(ecx_3, ebp_2 - 0x18)
            *(esp_7 - 4) = ebp_1[-6]
            sub_404138(&ebp_1[-4], 4)
            esp_18 = esp_7
            sub_51038c(esi_1, ebp_1[-4], 3, esi_1, edi)
        *(esi_1 + 0x1b1f6) = *(esi_1 + 0x1b1f7)
        sub_50f478(ebp_1[-2], esi_1 + 0x12164)
        sub_50e9c0(esi_1, esi_1, edi)
        esp_7 = esp_18 + 0x18
    
    *(esp_7 + 8)
    fsbase->NtTib.ExceptionList = *esp_7
    *(esp_7 + 8) = sub_50e034
    return sub_403e1c(&ebp_1[-0xa], 9)
}
