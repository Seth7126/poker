// ============================================================
// 函数名称: sub_409474
// 虚拟地址: 0x409474
// WARP GUID: ab0d6f38-146f-5258-8d1e-677587ee70fe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_409440, sub_404078
// [被调用的父级函数]: sub_42e994, sub_418900
// ============================================================

int32_t __convention("regparm")sub_409474(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax_1 = sub_404078(arg2)
    int32_t eax_1 = sub_404078(arg2)
    sub_409440(arg1, sub_40423c(arg2), eax_1)
    return arg1
}
