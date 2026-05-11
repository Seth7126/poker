// ============================================================
// 函数名称: sub_408ed4
// 虚拟地址: 0x408ed4
// WARP GUID: aa5c68e0-b235-5ad0-99a1-b3bc0a6b720e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405114
// [被调用的父级函数]: sub_49b404
// ============================================================

char* __stdcallsub_408ed4(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_10
    int32_t var_10
    char* eax
    char* result_1
    int32_t edx_1
    result_1, edx_1 = sub_405114(eax, &var_10)
    char* result = result_1
    int32_t var_8 = edx_1
    
    if (var_10 != 0)
        result = arg1
        var_8 = arg2
    
    return result
}
