// ============================================================
// 函数名称: sub_42fcd0
// 虚拟地址: 0x42fcd0
// WARP GUID: fa61105a-54f0-5d77-9d69-28090d7ced57
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42cc28
// [被调用的父级函数]: sub_445960
// ============================================================

int32_t __convention("regparm")sub_42fcd0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    arg1.w = 0xa
    arg1.w = 0xa & ebx[8].w
    
    if (0 == arg1.w)
        void* esi_1 = *(arg2 + 8)
        
        if ((*(esi_1 + 0x18) & 1) == 0 && sub_42cc28(ebx, esi_1 + 0x10, esi_1 + 0x14) == 0)
            *(esi_1 + 0x18) |= 1
    
    return (*(*ebx - 0x10))()
}
