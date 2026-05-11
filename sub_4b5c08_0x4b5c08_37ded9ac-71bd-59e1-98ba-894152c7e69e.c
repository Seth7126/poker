// ============================================================
// 函数名称: sub_4b5c08
// 虚拟地址: 0x4b5c08
// WARP GUID: 37ded9ac-71bd-59e1-98ba-894152c7e69e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b5bec, sub_40db10
// [被调用的父级函数]: sub_4b6b50, sub_4b6830, sub_4b6154, sub_4b6ae4, sub_4b6b8d
// ============================================================

int32_t __convention("regparm")sub_4b5c08(uint32_t arg1)
{
    // 第一条实际指令: char result = sub_40db10(arg1)
    char result = sub_40db10(arg1)
    
    if (result != 0)
        return result
    
    sub_4b5bec(arg1)
    noreturn
}
