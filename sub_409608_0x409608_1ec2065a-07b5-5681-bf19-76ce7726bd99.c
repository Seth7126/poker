// ============================================================
// 函数名称: sub_409608
// 虚拟地址: 0x409608
// WARP GUID: 1ec2065a-07b5-5681-bf19-76ce7726bd99
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4093dc, sub_40880c, sub_40bde8
// [被调用的父级函数]: sub_4097ab
// ============================================================

void __convention("regparm")sub_409608(int32_t arg1, int32_t arg2, int32_t arg3) __noreturn
{
    // 第一条实际指令: int32_t ebx = arg3
    int32_t ebx = arg3
    
    if (ebx u> 0x1f)
        ebx = 0x1f
    
    if (sub_40bde8() == 1)
        ebx -= 1
    
    char var_34[0x20]
    sub_4093dc(&var_34, arg2, ebx)
    var_34[ebx] = 0
    char (* var_14)[0x20] = &var_34
    char var_10 = 6
    sub_40880c((&data_52e164)[arg1], &var_14, 0)
    noreturn
}
