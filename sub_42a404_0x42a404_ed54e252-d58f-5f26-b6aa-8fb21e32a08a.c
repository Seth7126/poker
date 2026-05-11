// ============================================================
// 函数名称: sub_42a404
// 虚拟地址: 0x42a404
// WARP GUID: ed54e252-d58f-5f26-b6aa-8fb21e32a08a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4192d0, sub_403430, sub_403420, sub_42a4d8
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42a404(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    sub_42a4d8(arg1)
    int32_t result = sub_4192d0(arg1)
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
