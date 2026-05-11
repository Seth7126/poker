// ============================================================
// 函数名称: sub_404138
// 虚拟地址: 0x404138
// WARP GUID: 1e308862-221e-50bc-b886-d10391c56073
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_403ebc, sub_402980
// [被调用的父级函数]: sub_4a5f5c, sub_4c2b1c, sub_5127fc, sub_4b44d0, sub_4d7b54, sub_50dae4, sub_47b650, sub_48fca4, sub_4afc93, sub_51038c, sub_50abec, sub_508414, sub_4110a0, sub_4e649b, sub_4ed7a0, sub_4dd1d7, sub_5223e8, sub_4ae168, sub_469f7c, sub_4c4c9c, sub_509bfc, sub_50e4b0, sub_4dc3b8, sub_508998, sub_4afc9c, sub_525ab8, sub_499960, sub_4b4488, sub_47be18, sub_4998ec, sub_50928c, sub_507d3f, sub_497bcc, sub_4ed16c, sub_520efc, sub_502b8c, sub_4abbb0, sub_4c54b4, sub_4b008c, sub_5079cc, sub_519df0, sub_50fa27, sub_52c7c8, sub_50dbd4, sub_511fd8, sub_51300c, sub_50deb4, sub_4ad000, sub_49cfe0, sub_52b2f0, sub_4b1304, sub_5293a8, sub_4dad04, sub_52b570, sub_528e4c, sub_503984, sub_4b8c38, sub_46d9ac, sub_4c62e8, sub_5075fc, sub_507860, sub_40c688, sub_4acba4, sub_46a954, sub_524d14, sub_52afe4, sub_43c320, sub_50e9c0, sub_4d6cdc, sub_49f714, sub_4cca24, sub_507e90, sub_4c4ceb, sub_4cda5c, sub_4c0984, sub_4c0cbc, sub_50f0e4, sub_528770, sub_47d208, sub_471144, sub_49ba5c, sub_4670a8, sub_528e43, sub_5079c3, sub_4d6f10, sub_529818, sub_511bec, sub_4ec560, sub_4e6659, sub_50b624, sub_4ed040, sub_4b9e84, sub_4c96bc, sub_410c0c, sub_50f7b8, sub_4ad27c, sub_4c27e4, sub_509ed4, sub_4702a8, sub_4ecb3c, sub_4bdac0, sub_472ccc, sub_4692db, sub_50da00, sub_48e9e4, sub_52452c, sub_4da10c, sub_512690, sub_4a0cf7, sub_4c39c8, sub_51260b, sub_49f548, sub_519804, sub_4692e4, sub_46d884, sub_528b98, sub_490768, sub_51d270, sub_51a3a8, sub_4dc090, sub_4abda8, sub_50c5e0, sub_4dd1e0, sub_439b68, sub_5197fb, sub_4ee958, sub_49ffc4, sub_520a94, sub_40c310, sub_511670, sub_4d8208, sub_4d9a28, sub_46f698, sub_46f000, sub_46d99f, sub_4fc834, sub_51d840
// ============================================================

int32_t __convention("regparm")sub_404138(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = arg2
    int32_t var_c = arg2
    int32_t i_2 = arg2
    int32_t eax = 0
    int32_t i
    
    do
        int32_t ecx_1 = (&__return_addr)[arg2]
        
        if (ecx_1 != 0)
            eax += *(ecx_1 - 4)
        
        i = arg2
        arg2 -= 1
    while (i != 1)
    char* eax_1 = sub_403ebc(eax)
    char* esi = eax_1
    int32_t i_1
    
    do
        void* eax_2 = (&__return_addr)[i_2]
        char* edx = esi
        
        if (eax_2 != 0)
            int32_t ecx_2 = *(eax_2 - 4)
            esi = &esi[ecx_2]
            sub_402980(eax_2, edx, ecx_2)
        
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    
    if (eax_1 != 0)
        *(eax_1 - 8) -= 1
    
    sub_403e4c(arg1, eax_1)
    jump(__return_addr)
}
