// ============================================================
// 函数名称: sub_417d08
// 虚拟地址: 0x417d08
// WARP GUID: 2820dce7-7411-5b23-94fe-4d5755ace54f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DeleteCriticalSection
// [内部子函数调用]: sub_403430, sub_403420
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_417d08(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: sub_403430(arg1, arg2)
    sub_403430(arg1, arg2)
    int32_t result = DeleteCriticalSection(&arg1[2])
    
    if (arg2.b s<= 0)
        return result
    
    return sub_403420(arg1)
}
