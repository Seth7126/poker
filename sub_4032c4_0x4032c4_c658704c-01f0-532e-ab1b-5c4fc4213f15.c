// ============================================================
// 函数名称: sub_4032c4
// 虚拟地址: 0x4032c4
// WARP GUID: c658704c-01f0-532e-ab1b-5c4fc4213f15
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40327c, sub_403d4c
// [被调用的父级函数]: sub_41bc20, sub_41bda8, sub_41ba60, sub_41baf4, sub_41be36, sub_41bba4, sub_44b7c0
// ============================================================

int32_t __convention("regparm")sub_4032c4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_40327c(*arg1)
    sub_40327c(*arg1)
    bool z
    
    if (not(z))
        return arg2
    
    if (data_53101c != 0)
        data_53101c()
    
    noreturn sub_403d4c() __tailcall
}
