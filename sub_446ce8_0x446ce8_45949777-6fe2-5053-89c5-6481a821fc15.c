// ============================================================
// 函数名称: sub_446ce8
// 虚拟地址: 0x446ce8
// WARP GUID: 45949777-6fe2-5053-89c5-6481a821fc15
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos, PostMessageA, IsIconic
// [内部子函数调用]: sub_4301dc, sub_4318d0, sub_42bdf4, sub_4452e4, sub_4301c8
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_446ce8(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 4) == 2 && *(arg1 + 0x8b) != 1 && (arg1[8].b & 0x10) == 0 && IsIconic(sub_4318d0(arg1)) == 0 && sub_4301c8(arg1) s> 0)
    if (*(arg2 + 4) == 2 && *(arg1 + 0x8b) != 1 && (arg1[8].b & 0x10) == 0
            && IsIconic(sub_4318d0(arg1)) == 0 && sub_4301c8(arg1) s> 0)
        SetWindowPos(sub_4318d0(arg1), nullptr, 0, 0, 0, 0, 0x7)
        BOOL result = PostMessageA(sub_4318d0(arg1), 0xa2, *(arg2 + 4), *(arg2 + 8))
        
        if (*(arg1 + 0x216) == 0)
            return result
        
        return sub_42bdf4(sub_4301dc(arg1, 0), 1, 0xffffffff)
    
    return sub_4452e4(arg1, arg2)
}
