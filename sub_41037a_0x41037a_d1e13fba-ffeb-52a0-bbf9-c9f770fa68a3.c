// ============================================================
// 函数名称: sub_41037a
// 虚拟地址: 0x41037a
// WARP GUID: d1e13fba-ffeb-52a0-bbf9-c9f770fa68a3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40ca2c
// [被调用的父级函数]: sub_4102e4
// ============================================================

int32_tsub_41037a(int32_t* arg1 @ ebp, int32_t arg2)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_40ca2c(data_531618)
    int32_t result
    result.b = *(arg1 - 9)
    *arg1
    return result
}
