// ============================================================
// 函数名称: sub_43ce1c
// 虚拟地址: 0x43ce1c
// WARP GUID: 1fcded75-5113-5ea3-820d-d35d47231705
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_43ce2c
// ============================================================

void __convention("regparm")sub_43ce1c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: while (arg2 s> 0)
    for (; arg2 s> 0; arg2 -= 1)
        if (arg1 == 0)
            break
        
        arg1 = *(arg1 + 0x58)
}
