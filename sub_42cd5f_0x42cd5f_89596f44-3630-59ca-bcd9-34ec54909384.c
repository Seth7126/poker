// ============================================================
// 函数名称: sub_42cd5f
// 虚拟地址: 0x42cd5f
// WARP GUID: 89596f44-3630-59ca-bcd9-34ec54909384
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __fastcallsub_42cd5f(int32_t arg1, char arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    int32_t var_8 = arg1
    var_8:3.b = arg2
    
    if (*(arg3 + 0xc2) == 0)
        return 
    
    int32_t var_10_1 = arg1
    arg1.b = var_8:3.b
    *(arg3 + 0xc4)
    (*(arg3 + 0xc0))(arg4, var_10_1)
}
