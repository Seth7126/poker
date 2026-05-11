// ============================================================
// 函数名称: sub_406398
// 虚拟地址: 0x406398
// WARP GUID: bc3ea8b7-1790-5f44-9483-ab2cb477b51f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: j_sub_406190, sub_402844
// [被调用的父级函数]: sub_406446, sub_406403, sub_404444, sub_40643c, sub_4064c9, sub_4064e4, sub_406463
// ============================================================

void __convention("regparm")sub_406398(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    int32_t var_4 = esi
    int32_t edi
    int32_t var_8 = edi
    int32_t* esp_1 = &var_8
    int32_t esi_1 = arg2
    
    if (*(arg1 + 4) != 0xd7b2 && arg1 == 0x53121c)
        int32_t var_10_1 = arg2
        j_sub_406190()
        esp_1 = &var_8
    
    if (*(arg1 + 4) == 0xd7b2 || (arg1 == 0x53121c && *(arg1 + 4) == 0xd7b2))
        while (true)
            int32_t edi_2 = *(arg1 + 0x14) + *(arg1 + 0xc)
            int32_t count = *(arg1 + 8) - *(arg1 + 0xc)
            
            if (count s> arg3)
                *(arg1 + 0xc) += arg3
                __builtin_memcpy(edi_2, esi_1, arg3)
                break
            
            *(arg1 + 0xc) += count
            *(esp_1 - 4) = arg1
            *(esp_1 - 8) = arg3 - count
            esi_1 = __builtin_memcpy(edi_2, esi_1, count)
            int32_t eax = (*(arg1 + 0x1c))()
            
            if (eax != 0)
                sub_402844(eax)
                *esp_1
                esp_1[1]
                esp_1 = &esp_1[2]
                break
            
            arg3 = *esp_1
            arg1 = esp_1[1]
            esp_1 = &esp_1[2]
    else
        sub_402844(0x69)
    
    *esp_1
    esp_1[1]
}
