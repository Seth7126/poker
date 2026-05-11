// ============================================================
// 函数名称: sub_40bcec
// 虚拟地址: 0x40bcec
// WARP GUID: ac4bc9f6-76f3-5966-895f-db8e808a76bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetVersionExA
// [内部子函数调用]: sub_404028
// [被调用的父级函数]: sub_40da04
// ============================================================

BOOLsub_40bcec()
{
    // 第一条实际指令: OSVERSIONINFOA versionInformation
    OSVERSIONINFOA versionInformation
    versionInformation.dwOSVersionInfoSize = 0x94
    BOOL result = GetVersionExA(&versionInformation)
    
    if (result != 0)
        data_52e0d4 = versionInformation.dwPlatformId
        data_52e0d8 = versionInformation.dwMajorVersion
        data_52e0dc = versionInformation.dwMinorVersion
        data_52e0e0 = versionInformation.dwBuildNumber
        result = 0x52e0e4
        var_80
        sub_404028(0x52e0e4, &var_80, 0x80)
    
    return result
}
