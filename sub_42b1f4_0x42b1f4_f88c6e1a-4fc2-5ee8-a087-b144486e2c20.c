// ============================================================
// 函数名称: sub_42b1f4
// 虚拟地址: 0x42b1f4
// WARP GUID: f88c6e1a-4fc2-5ee8-a087-b144486e2c20
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b220, sub_40fa94, sub_42b5fc
// [被调用的父级函数]: sub_44317c, sub_442aa0, sub_42d14c
// ============================================================

int32_t __convention("regparm")sub_42b1f4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_10
    int32_t var_10
    sub_40fa94(arg2, sub_42b220(arg1), &var_10)
    return sub_42b5fc(arg1, &var_10)
}
