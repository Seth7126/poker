// ============================================================
// 函数名称: sub_42b348
// 虚拟地址: 0x42b348
// WARP GUID: b368350c-44cf-5b6f-aad2-04478a6bd24b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_444d44, sub_403248
// [被调用的父级函数]: sub_42cb68, sub_42cbd0, sub_42cbb4, sub_42d734
// ============================================================

void __convention("regparm")sub_42b348(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* i = arg1
    for (int32_t* i = arg1; i != 0; i = i[9])
        if (sub_403248(i, &data_43f580).b != 0)
            sub_444d44(i, arg2)
}
