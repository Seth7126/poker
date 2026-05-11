// ============================================================
// 函数名称: sub_45b2cc
// 虚拟地址: 0x45b2cc
// WARP GUID: bd799892-52d7-547b-9b2e-661c408862fd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45afc4
// [被调用的父级函数]: sub_45b4f4
// ============================================================

void __convention("regparm")sub_45b2cc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x19a)
    void* ebx = *(arg1 + 0x19a)
    
    if (arg2 u>= 1)
        if (arg2 == 2)
            *(ebx + 4) = sub_45b4d4
            return 
        
        *(*arg1 + 0x14) = 4
        (**arg1)()
        return 
    
    if (*(*(arg1 + 0x1b6) + 8) == 0)
        *(ebx + 4) = sub_45b334
    else
        *(ebx + 4) = sub_45b3ac
        sub_45afc4(arg1)
        *(ebx + 0x40) = 0
        *(ebx + 0x44) = 0
        *(ebx + 0x4c) = 0
    
    *(ebx + 0x30) = 0
    *(ebx + 0x34) = 0
}
