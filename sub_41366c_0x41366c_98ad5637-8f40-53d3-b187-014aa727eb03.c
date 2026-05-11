// ============================================================
// 函数名称: sub_41366c
// 虚拟地址: 0x41366c
// WARP GUID: 98ad5637-8f40-53d3-b187-014aa727eb03
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_413600, sub_415370, sub_415210
// [被调用的父级函数]: sub_4144e0, sub_4144e8, sub_413b08
// ============================================================

int32_t __convention("regparm")sub_41366c(struct _EXCEPTION_REGISTRATION_RECORD* arg1, char arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    char result = sub_415210(ecx)
    
    if (arg2 == result)
        return result
    
    arg1->__offset(0x10).d -= 1
    sub_415370(arg1)
    sub_413600()
    noreturn
}
