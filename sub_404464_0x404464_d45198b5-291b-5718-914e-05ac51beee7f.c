// ============================================================
// 函数名称: sub_404464
// 虚拟地址: 0x404464
// WARP GUID: d45198b5-291b-5718-914e-05ac51beee7f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40401c, sub_4060d0, sub_403df8, sub_404080
// [被调用的父级函数]: sub_5197fb, sub_51d840, sub_519804
// ============================================================

char* __fastcallsub_404464(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_403df8(arg2)
    sub_403df8(arg2)
    char* result = arg2
    char var_108[0x100]
    sub_40401c(sub_4060d0(0xff, &var_108), &var_108)
    
    while (var_108[0] == 0xff)
        int32_t ecx_1 = sub_4060d0(0xff, &var_108)
        char* result_1 = nullptr
        sub_40401c(ecx_1, &var_108)
        sub_404080(arg2, result_1)
        sub_403df8(&result_1)
        result = result_1
    
    return result
}
