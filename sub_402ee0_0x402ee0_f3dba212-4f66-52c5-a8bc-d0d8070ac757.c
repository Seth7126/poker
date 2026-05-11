// ============================================================
// 函数名称: sub_402ee0
// 虚拟地址: 0x402ee0
// WARP GUID: f3dba212-4f66-52c5-a8bc-d0d8070ac757
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_49ebd4
// ============================================================

void __convention("regparm")sub_402ee0(int32_t arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t edi = arg2
    uint32_t i = zx.d(arg3)
    
    while (i != 0)
        bool cond:0_1 = *esi == *edi
        esi += 1
        edi += 1
        i -= 1
        
        if (not(cond:0_1))
            break
}
