// ============================================================
// 函数名称: sub_480418
// 虚拟地址: 0x480418
// WARP GUID: d6bf65b3-4a8a-5a74-b631-c5fa6ba9777f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a010, sub_47a9a0, sub_47a180
// [被调用的父级函数]: sub_4807f4, sub_46e24c, sub_46ea8b
// ============================================================

int32_t __convention("regparm")sub_480418(void* arg1, int32_t arg2)
{
    // 第一条实际指令: char result
    char result
    
    if (arg2 s>= 0x20)
        int32_t __saved_ecx
        sub_47a9a0(*(arg1 + 0x1150), *(arg1 + 0x10d4), arg1, &__saved_ecx)
        sub_47a180(*(arg1 + 0x1154), *(arg1 + 0x10d4), arg1, 1)
        sub_47a180(*(arg1 + 0x1158), *(arg1 + 0x10d4), arg1, 1)
        *(arg1 + 0xdf8) = sub_47a010(arg1, *(arg1 + 0x10d4), *(arg1 + 0x1154))
        result = sub_47a010(arg1, *(arg1 + 0x10d4), *(arg1 + 0x1158))
        *(arg1 + 0xdf9) = result
        *(arg1 + 0xdfc) = 0
    else
        *(arg1 + 0xdf8) = 0
        *(arg1 + 0xdf9) = 0
        sub_47a180(*(arg1 + 0x1154), *(arg1 + 0x10d4), arg1, 0)
        result = sub_47a180(*(arg1 + 0x1158), *(arg1 + 0x10d4), arg1, 0)
        *(arg1 + 0xdfc) = 1
    
    return result
}
