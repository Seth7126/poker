// ============================================================
// 函数名称: sub_41bf98
// 虚拟地址: 0x41bf98
// WARP GUID: 21a66aeb-d979-566d-a27f-a90ea78f79eb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41bf1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41bf98(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    sub_41bf1c(&__saved_ebp)
    return (*(*arg2 + 8))(sub_41bec0, arg1, sub_41bda8, arg1)
}
