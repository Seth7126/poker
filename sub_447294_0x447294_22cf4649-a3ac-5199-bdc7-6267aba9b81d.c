// ============================================================
// 函数名称: sub_447294
// 虚拟地址: 0x447294
// WARP GUID: 22cf4649-a3ac-5199-bdc7-6267aba9b81d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_449c64, sub_403248
// [被调用的父级函数]: sub_4425d8
// ============================================================

int32_t __convention("regparm")sub_447294(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_4103c8(*(arg1 + 0x44), arg2)
    sub_4103c8(*(arg1 + 0x44), arg2)
    char result = sub_403248(arg2, &data_43f864)
    
    if (result == 0)
        return result
    
    sub_4103c8(*(arg1 + 0x40), arg2)
    return sub_449c64(data_5317d8)
}
