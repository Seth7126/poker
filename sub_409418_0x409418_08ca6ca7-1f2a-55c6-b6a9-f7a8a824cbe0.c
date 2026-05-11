// ============================================================
// 函数名称: sub_409418
// 虚拟地址: 0x409418
// WARP GUID: 08ca6ca7-1f2a-55c6-b6a9-f7a8a824cbe0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_447f44, sub_447f54
// ============================================================

int32_t __convention("regparm")sub_409418(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = arg2
    int32_t edi = arg2
    int32_t i = 0xffffffff
    
    while (i != 0)
        bool cond:0_1 = 0 != *edi
        edi += 1
        i -= 1
        
        if (not(cond:0_1))
            break
    
    int32_t ecx = not.d(i)
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2 = __builtin_memcpy(arg1, arg2, ecx u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_2, ecx & 3)
    return arg1
}
