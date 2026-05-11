// ============================================================
// 函数名称: sub_42e664
// 虚拟地址: 0x42e664
// WARP GUID: 0ac18758-2eb2-53b6-826c-9a5c547c833d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42a24c, sub_403248
// [被调用的父级函数]: sub_42e780, sub_42da58
// ============================================================

int32_t __convention("regparm")sub_42e664(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, 0x427f2c) == 0)
    if (sub_403248(arg2, 0x427f2c) == 0)
        sub_42a24c(arg1 + 0x134)
    else
        sub_42a24c(arg1 + 0x16c)
        sub_42a24c(arg1 + 0x180)
    
    arg2[9] = 0
    return 0
}
