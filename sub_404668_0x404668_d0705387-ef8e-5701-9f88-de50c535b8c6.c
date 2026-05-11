// ============================================================
// 函数名称: sub_404668
// 虚拟地址: 0x404668
// WARP GUID: d0705387-ef8e-5701-9f88-de50c535b8c6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SysAllocStringLen
// [内部子函数调用]: sub_4027e0
// [被调用的父级函数]: sub_4048a0
// ============================================================

void __convention("regparm")sub_404668(int32_t* arg1)
{
    // 第一条实际指令: wchar16* strIn = *arg1
    wchar16* strIn = *arg1
    
    if (strIn == 0)
        return 
    
    int32_t* var_4_1 = arg1
    arg1 = SysAllocStringLen(strIn, *(strIn - 4) u>> 1)
    
    if (arg1 == 0)
        arg1.b = 1
        noreturn sub_4027e0(arg1) __tailcall
    
    *var_4_1 = arg1
}
