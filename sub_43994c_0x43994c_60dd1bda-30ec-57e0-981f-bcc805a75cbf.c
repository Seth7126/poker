// ============================================================
// 函数名称: sub_43994c
// 虚拟地址: 0x43994c
// WARP GUID: 60dd1bda-30ec-57e0-981f-bcc805a75cbf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b890
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43994c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: char result = (*(*arg1 + 0x28))()
    char result = (*(*arg1 + 0x28))()
    
    if (result == 0)
        return result
    
    return sub_43b890(arg1[6], arg2)
}
