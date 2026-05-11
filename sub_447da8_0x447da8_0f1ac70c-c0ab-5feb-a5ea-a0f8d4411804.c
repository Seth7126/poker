// ============================================================
// 函数名称: sub_447da8
// 虚拟地址: 0x447da8
// WARP GUID: 0f1ac70c-c0ab-5feb-a5ea-a0f8d4411804
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CallNextHookEx
// [内部子函数调用]: sub_4490e8
// [被调用的父级函数]: sub_447dec
// ============================================================

LRESULT __stdcallsub_447da8(int32_t arg1, WPARAM arg2, LPARAM arg3)
{
    // 第一条实际指令: LRESULT result = CallNextHookEx(data_5317f4, arg1, arg2, arg3)
    LRESULT result = CallNextHookEx(data_5317f4, arg1, arg2, arg3)
    
    if (arg1 s>= 0 && data_5317d8 != 0)
        sub_4490e8(data_5317d8)
    
    return result
}
