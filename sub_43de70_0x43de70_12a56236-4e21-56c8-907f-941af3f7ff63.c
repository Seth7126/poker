// ============================================================
// 函数名称: sub_43de70
// 虚拟地址: 0x43de70
// WARP GUID: 12a56236-4e21-56c8-907f-941af3f7ff63
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_440cb8
// [被调用的父级函数]: sub_43deb4
// ============================================================

int32_t __convention("regparm")sub_43de70(int32_t* arg1, int32_t arg2, int32_t arg3 @ esi)
{
    // 第一条实际指令: if (arg1[2] == 0)
    if (arg1[2] == 0)
        arg1[4] = sub_440cb8(sub_43d8e8, arg1.w, arg3)
    
    return sub_4103c8(arg1, arg2)
}
