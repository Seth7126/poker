// ============================================================
// 函数名称: sub_41b8f8
// 虚拟地址: 0x41b8f8
// WARP GUID: 382d1f1d-2c27-51d2-85d2-7433922602b7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524
// [被调用的父级函数]: sub_41bc94, sub_41bba4
// ============================================================

int32_t __convention("regparm")sub_41b8f8(void* arg1, int16_t arg2)
{
    // 第一条实际指令: int32_t i = *(*(arg1 + 8) + 8) - 1
    int32_t i = *(*(arg1 + 8) + 8) - 1
    
    if (i s>= 0)
        do
            if (arg2 == sub_410524(*(arg1 + 8), i))
                return sub_410524(*(arg1 + 4), i)
            
            i -= 1
        while (i != 0xffffffff)
    
    return 0
}
