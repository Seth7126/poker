// ============================================================
// 函数名称: sub_4452e4
// 虚拟地址: 0x4452e4
// WARP GUID: cac7a04a-b2fb-54de-8abe-459a5f2e6d42
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos, PostMessageA, IsIconic
// [内部子函数调用]: sub_42bdf4, sub_42cbb4, sub_4318d0
// [被调用的父级函数]: sub_446ce8
// ============================================================

BOOL __convention("regparm")sub_4452e4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 4) == 2 && *(arg1 + 0x8b) == 1 && (arg1[8].b & 0x10) == 0 && IsIconic(sub_4318d0(arg1)) == 0)
    if (*(arg2 + 4) == 2 && *(arg1 + 0x8b) == 1 && (arg1[8].b & 0x10) == 0
            && IsIconic(sub_4318d0(arg1)) == 0)
        SetWindowPos(sub_4318d0(arg1), nullptr, 0, 0, 0, 0, 0x7)
        BOOL result = PostMessageA(sub_4318d0(arg1), 0xa2, *(arg2 + 4), *(arg2 + 8))
        
        if (*(arg1 + 0x216) == 0)
            return result
        
        return sub_42bdf4(arg1, (*(*arg1 + 0x50))() ^ 1, 0xffffffff)
    
    return sub_42cbb4(arg1)
}
