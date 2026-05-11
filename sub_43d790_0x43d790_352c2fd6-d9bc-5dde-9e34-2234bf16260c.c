// ============================================================
// 函数名称: sub_43d790
// 虚拟地址: 0x43d790
// WARP GUID: 352c2fd6-d9bc-5dde-9e34-2234bf16260c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43d744, sub_403260
// [被调用的父级函数]: sub_42b730
// ============================================================

void __convention("regparm")sub_43d790(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x35) == 0)
    if (*(arg1 + 0x35) == 0)
        return 
    
    sub_403260(arg2, &data_4279b4)
    sub_43d744(arg1, *(arg2 + 0x4f))
    *(arg1 + 0x35) = 1
}
