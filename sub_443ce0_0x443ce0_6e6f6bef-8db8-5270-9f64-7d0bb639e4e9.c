// ============================================================
// 函数名称: sub_443ce0
// 虚拟地址: 0x443ce0
// WARP GUID: 6e6f6bef-8db8-5270-9f64-7d0bb639e4e9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415df8, sub_43b890
// [被调用的父级函数]: sub_442994
// ============================================================

void __convention("regparm")sub_443ce0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: *(arg1 + 0x248) = arg2
    *(arg1 + 0x248) = arg2
    
    if (arg2 != 0)
        sub_415df8(arg2, arg1)
        sub_43b890(arg2, 0)
}
