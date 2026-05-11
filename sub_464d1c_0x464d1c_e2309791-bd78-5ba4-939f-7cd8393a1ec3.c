// ============================================================
// 函数名称: sub_464d1c
// 虚拟地址: 0x464d1c
// WARP GUID: e2309791-bd78-5ba4-939f-7cd8393a1ec3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_464cc4, sub_464c08, sub_464cf0
// [被调用的父级函数]: sub_464f18, sub_4653e8, sub_464d6c, sub_4653ac, sub_465154
// ============================================================

int32_t __convention("regparm")sub_464d1c(uint32_t arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x38)
    int32_t result = *(arg1 + 0x38)
    
    if (result u> 0)
        int32_t esi_1 = 0
        
        while (true)
            result s>>= 1
            
            if (result == 0)
                break
            
            esi_1 += 1
        
        sub_464cc4(arg1, *(arg1 + 0x34), esi_1 << 4)
        
        if (esi_1 != 0)
            sub_464c08(arg1, *(arg1 + 0x38), esi_1)
        
        *(arg1 + 0x38) = 0
        result = sub_464cf0(arg1, *(arg1 + 0x40), *(arg1 + 0x3c))
        *(arg1 + 0x3c) = 0
    
    return result
}
