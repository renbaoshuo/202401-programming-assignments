double getAverage(Applicant *a) {
    return a->presentation * 0.4 + a->logical * 0.5 + a->humanistic * 0.3 + a->scientific * 0.6 + a->computational * 0.8;
}
