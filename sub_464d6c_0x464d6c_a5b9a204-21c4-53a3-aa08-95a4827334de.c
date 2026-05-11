// ============================================================
// 函数名称: sub_464d6c
// 虚拟地址: 0x464d6c
// WARP GUID: a5b9a204-21c4-53a3-aa08-95a4827334de
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_464bd8, sub_464ca4, sub_464d1c
// [被调用的父级函数]: sub_4650ac, sub_464f18, sub_464dec, sub_465154
// ============================================================

int32_t* __convention("regparm")sub_464d6c(uint32_t arg1, char arg2)
{
    // 第一条实际指令: sub_464d1c(arg1)
    sub_464d1c(arg1)
    
    if (*(arg1 + 0xc) == 0)
        sub_464ca4(arg1)
        char* edx = *(arg1 + 0x10)
        *(arg1 + 0x10) += 1
        *edx = 0xff
        int32_t temp0_1 = *(arg1 + 0x14)
        *(arg1 + 0x14) -= 1
        
        if (temp0_1 == 1)
            sub_464bd8(arg1)
        
        char* ecx_1 = *(arg1 + 0x10)
        *(arg1 + 0x10) += 1
        *ecx_1 = arg2 - 0x30
        int32_t temp1_1 = *(arg1 + 0x14)
        *(arg1 + 0x14) -= 1
        
        if (temp1_1 == 1)
            sub_464bd8(arg1)
    
    if (*(*(arg1 + 0x20) + 0x131) != 0)
        *(arg1 + 0x38) = 0
        *(arg1 + 0x3c) = 0
        return 0
    
    int32_t i = 0
    int32_t* result = arg1 + 0x24
    
    while (i s< *(*(arg1 + 0x20) + 0xe9))
        i += 1
        *result = 0
        result = &result[1]
    
    return result
}
