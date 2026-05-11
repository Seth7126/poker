// ============================================================
// 函数名称: sub_40b3d8
// 虚拟地址: 0x40b3d8
// WARP GUID: f36578c3-1cd3-5092-a377-b1342b74d15e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadStringA, MessageBoxA
// [内部子函数调用]: sub_406463, sub_4055a0, sub_402824, j_sub_4064e4, sub_40b250
// [被调用的父级函数]: sub_449490, sub_496eec, sub_40bba4
// ============================================================

enum MESSAGEBOX_RESULTsub_40b3d8()
{
    // 第一条实际指令: void text
    void text
    int32_t* eax
    int32_t edx
    sub_40b250(&text, edx, eax, 0x400)
    
    if (*data_530784 == 0)
        void var_440
        LoadStringA(sub_4055a0(data_5314dc), *(data_530148 + 4), &var_440, 0x40)
        return MessageBoxA(nullptr, &text, &var_440, 0x2010)
    
    data_530214
    j_sub_4064e4()
    enum MESSAGEBOX_RESULT result = sub_406463()
    sub_402824(result)
    return result
}
