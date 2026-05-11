// ============================================================
// 函数名称: sub_437c44
// 虚拟地址: 0x437c44
// WARP GUID: 32e400eb-0856-50b4-b234-3aca65b3140f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408968, sub_4128c0
// [被调用的父级函数]: sub_437c84
// ============================================================

int32_t __convention("regparm")sub_437c44(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_4128c0(arg1) == sub_4128c0(arg2))
    if (sub_4128c0(arg1) == sub_4128c0(arg2))
        int32_t eax_5 = sub_4128c0(arg1)
        
        if (sub_408968(arg1[1], arg2[1], eax_5) != 0)
            return 1
    
    return 0
}
